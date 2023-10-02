from telethon.sync import TelegramClient, events
from tqdm import  tqdm
import os

api_id = 22074086
api_hash = '805d35f4d325cb0797881665310cc64a'


with TelegramClient('KMS Bismarck', api_id, api_hash) as client:
    messages = client.get_messages('<channel/chat>', limit=4000) # limit defaults to 1
    for msg in tqdm(messages):
        msg.download_media(file=os.path.join('media', '<file_name>'))