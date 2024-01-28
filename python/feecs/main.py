from dotenv import load_dotenv
load_dotenv()

import os
from supabase import create_client

url = os.environ.get("https://ygheheegzllkumnpqmxf.supabase.co")
key = os.environ.get("eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJzdXBhYmFzZSIsInJlZiI6InlnaGVoZWVnemxsa3VtbnBxbXhmIiwicm9sZSI6ImFub24iLCJpYXQiOjE3MDYxNDc4MjcsImV4cCI6MjAyMTcyMzgyN30.fMT33UXRUqlVsTpyUuszPiT6HEzGDcSF9d-6y-YvYfg")
supabase = create_client(url, key)
