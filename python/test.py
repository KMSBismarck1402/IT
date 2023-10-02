import spacy
nlp = spacy.load('en_core_web_sm')
doc = nlp(u'Telsa is looking at buying U.S. startup for $6 million')
for token in doc:
    print(token.text,token.pos_,token.dep_)
nlp.pipeline
nlp.pipe_names
doc2 = nlp(u"Telsa isn't looking into startups anymore")
for token in doc2:
    print(token.text,token.pos_,token.dep_)
doc3 = nlp(u"When Sebastian Thrun started working on self-driving cars at Google in 2007, \
    few people outside of the company took him seriously. \
        “I can tell you very senior CEOs of major American car companies would shake my \
            hand and turn away because I wasn’t worth talking to,” said Thrun, in an interview with Recode earlier this week.")
I_quote = doc3[25:54]
for token in doc3:
    print(token.text,token.pos_,token.dep_)
print(I_quote)
type(I_quote)
type(doc3)