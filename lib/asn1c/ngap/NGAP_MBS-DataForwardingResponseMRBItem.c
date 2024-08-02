/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../support/ngap-r17.3.0/38413-h30.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER -no-gen-JER`
 */

#include "NGAP_MBS-DataForwardingResponseMRBItem.h"

#include "NGAP_MRB-ProgressInformation.h"
#include "NGAP_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_NGAP_MBS_DataForwardingResponseMRBItem_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NGAP_MBS_DataForwardingResponseMRBItem, mRB_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NGAP_MRB_ID,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"mRB-ID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NGAP_MBS_DataForwardingResponseMRBItem, dL_Forwarding_UPTNLInformation),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NGAP_UPTransportLayerInformation,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"dL-Forwarding-UPTNLInformation"
		},
	{ ATF_POINTER, 2, offsetof(struct NGAP_MBS_DataForwardingResponseMRBItem, mRB_ProgressInformation),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NGAP_MRB_ProgressInformation,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"mRB-ProgressInformation"
		},
	{ ATF_POINTER, 1, offsetof(struct NGAP_MBS_DataForwardingResponseMRBItem, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NGAP_ProtocolExtensionContainer_11905P150,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_NGAP_MBS_DataForwardingResponseMRBItem_oms_1[] = { 2, 3 };
static const ber_tlv_tag_t asn_DEF_NGAP_MBS_DataForwardingResponseMRBItem_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NGAP_MBS_DataForwardingResponseMRBItem_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* mRB-ID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* dL-Forwarding-UPTNLInformation */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* mRB-ProgressInformation */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_NGAP_MBS_DataForwardingResponseMRBItem_specs_1 = {
	sizeof(struct NGAP_MBS_DataForwardingResponseMRBItem),
	offsetof(struct NGAP_MBS_DataForwardingResponseMRBItem, _asn_ctx),
	asn_MAP_NGAP_MBS_DataForwardingResponseMRBItem_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_NGAP_MBS_DataForwardingResponseMRBItem_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NGAP_MBS_DataForwardingResponseMRBItem = {
	"MBS-DataForwardingResponseMRBItem",
	"MBS-DataForwardingResponseMRBItem",
	&asn_OP_SEQUENCE,
	asn_DEF_NGAP_MBS_DataForwardingResponseMRBItem_tags_1,
	sizeof(asn_DEF_NGAP_MBS_DataForwardingResponseMRBItem_tags_1)
		/sizeof(asn_DEF_NGAP_MBS_DataForwardingResponseMRBItem_tags_1[0]), /* 1 */
	asn_DEF_NGAP_MBS_DataForwardingResponseMRBItem_tags_1,	/* Same as above */
	sizeof(asn_DEF_NGAP_MBS_DataForwardingResponseMRBItem_tags_1)
		/sizeof(asn_DEF_NGAP_MBS_DataForwardingResponseMRBItem_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NGAP_MBS_DataForwardingResponseMRBItem_1,
	4,	/* Elements count */
	&asn_SPC_NGAP_MBS_DataForwardingResponseMRBItem_specs_1	/* Additional specs */
};
