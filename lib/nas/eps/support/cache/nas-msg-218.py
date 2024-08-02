ies = []
ies.append({ "iei" : "28", "value" : "Access point name", "type" : "Access point name", "reference" : "9.9.4.1", "presence" : "O", "format" : "TLV", "length" : "3-102"})
ies.append({ "iei" : "27", "value" : "Protocol configuration options", "type" : "Protocol configuration options", "reference" : "9.9.4.11", "presence" : "O", "format" : "TLV", "length" : "3-253"})
ies.append({ "iei" : "7B", "value" : "Extended protocol configuration options", "type" : "Extended protocol configuration options", "reference" : "9.9.4.26", "presence" : "O", "format" : "TLV-E", "length" : "4-65538"})
msg_list[key]["ies"] = ies
