ies = []
ies.append({ "ie_type" : "Indication", "ie_value" : "Indication Flags", "presence" : "C", "instance" : "0", "comment" : "This IE shall be included if any one of the applicable flags is set to 1.Applicable flags are:ISRAI: This flag shall be set to 1 if ISR is established between the MME and the S4 SGSN for an S1-based Handover without SGW relocation and for an X2-based Handover without SGW relocation.Change F-TEID support Indication: This flag shall be set to 1 for an IDLE state UE initiated TAU procedure to allow the SGW changing the GTP-U F-TEID.S11-U Tunnel Flag: this flag shall be set to 1 on the S11 interface if user data is transported in NAS signalling."})
ies.append({ "ie_type" : "F-TEID", "ie_value" : "Sender F-TEID for Control Plane", "presence" : "C", "instance" : "0", "comment" : "The new MME shall include this IE on the S11 interface for a TAU/Handover with MME change and without any SGW change.If the SGW receives this IE and if it finds that its value is the same as the earlier received value of this IE for this UE, it should interpret this to mean that the MME has not changed."})
ies.append({ "ie_type" : "Delay Value", "ie_value" : "Delay Downlink Packet Notification Request", "presence" : "C", "instance" : "0", "comment" : "This IE shall be sent for a UE triggered Service Request and UE initiated Connection Resume procedures. It shall contain the delay the SGW shall apply between receiving downlink data and sending Downlink Data Notification for all UEs served by that MME (see clause5.3.4.2 of 3GPPTS23.401[3])."})
ies.append({ "ie_type" : "Bearer Context", "ie_value" : "Bearer Contexts to be modified", "presence" : "C", "instance" : "0", "comment" : "Several IEs with the same type and instance value may be included as necessary to represent a list of Bearers to be modified.See NOTE 1."})
ies.append({ "ie_type" : "Bearer Context", "ie_value" : "Bearer Contexts to be removed", "presence" : "C", "instance" : "1", "comment" : "This IE shall be included for the TAU/Handover, UE initiated Connection Resume and Service Request procedures where any of the bearers existing before the TAU/Handover procedure, UE initiated Connection Resume and Service Request procedures will be deactivated as consequence of the TAU/Handover procedure, UE initiated Connection Resume and Service Request procedures.For the Service Request and UE initiated Connection Resume procedures, all unaccepted bearers for this UE shall be included.For each of those bearers, an IE with the same type and instance value, shall be included.See NOTE 1."})
ies.append({ "ie_type" : "Recovery", "ie_value" : "Recovery", "presence" : "C", "instance" : "0", "comment" : "This IE shall be included if contacting the peer for the first time."})
ies.append({ "ie_type" : "Secondary RAT Usage Data Report", "ie_value" : "Secondary RAT Usage Data Report", "presence" : "CO", "instance" : "0", "comment" : "If the PLMN has configured secondary RAT usage reporting, and if the Secondary RAT usage data is not intended for the PGW(s) for any of active PDN Connections, the MME shall include this IE on the S11 interface if it has received Secondary RAT usage data from eNodeB in an X2-based handover without Serving GW relocation, S1-based handover without MME or SGW relocation, or E-UTRAN initiated E-RAB modification procedure.The MME shall also include this IE on the S11 interface if it has received a Secondary RAT Usage Data Report from the source MME in an S1-based handover with MME relocation but without SGW relocation.The MME shall set the IRPGW flag to 0, to indicate that the IE shall not be forwarded to the PGW.Several IEs with the same type and instance value may be included, to represent multiple usage data reports."})
ies.append({ "ie_type" : "PSCell ID", "ie_value" : "PSCell ID", "presence" : "CO", "instance" : "0", "comment" : "The MME shall include this IE on the S11 interface, if it has received this information from the eNodeB."})
msg_list[key]["ies"] = ies
