from telethon.sync import TelegramClient
from telethon.tl.functions.messages import GetDialogsRequest
from telethon.tl.functions.channels import GetFullChannelRequest
from telethon.tl.types import InputPeerEmpty
from tqdm import tqdm

api_id = 22074086
api_hash = '805d35f4d325cb0797881665310cc64a' 


def download_media(group, cl, name):
    messages = cl.get_messages(group, limit=4000)

    for message in tqdm(messages):
        message.download_media('./' + name + '/')


with TelegramClient('KMS Bismarck', api_id, api_hash) as client:
    result = client(GetDialogsRequest(
        offset_date=None,
        offset_id=0,
        offset_peer=InputPeerEmpty(),
        limit=4000,
        hash=0,
    ))

    title = 'EroCosplays'           
    for chat in result.chats:
        print(chat)

        if chat.title == title:
            download_media(chat, client, title)

    title = 'EroCosplays'         # Title for channel
    channel = client(GetFullChannelRequest(title))
    print(channel.full_chat)

    download_media(channel.full_chat, client, title)