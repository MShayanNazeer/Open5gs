/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "../support/s1ap-r17.3.0/36413-h30.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER -no-gen-JER`
 */

#include "S1AP_Cdma2000HORequiredIndication.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_S1AP_Cdma2000HORequiredIndication_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  0,  0,  0,  0 }	/* (0..0,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_S1AP_Cdma2000HORequiredIndication_value2enum_1[] = {
	{ 0,	4,	"true" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_S1AP_Cdma2000HORequiredIndication_enum2value_1[] = {
	0	/* true(0) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_S1AP_Cdma2000HORequiredIndication_specs_1 = {
	asn_MAP_S1AP_Cdma2000HORequiredIndication_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_S1AP_Cdma2000HORequiredIndication_enum2value_1,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	2,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_S1AP_Cdma2000HORequiredIndication_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_S1AP_Cdma2000HORequiredIndication = {
	"Cdma2000HORequiredIndication",
	"Cdma2000HORequiredIndication",
	&asn_OP_NativeEnumerated,
	asn_DEF_S1AP_Cdma2000HORequiredIndication_tags_1,
	sizeof(asn_DEF_S1AP_Cdma2000HORequiredIndication_tags_1)
		/sizeof(asn_DEF_S1AP_Cdma2000HORequiredIndication_tags_1[0]), /* 1 */
	asn_DEF_S1AP_Cdma2000HORequiredIndication_tags_1,	/* Same as above */
	sizeof(asn_DEF_S1AP_Cdma2000HORequiredIndication_tags_1)
		/sizeof(asn_DEF_S1AP_Cdma2000HORequiredIndication_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_S1AP_Cdma2000HORequiredIndication_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_S1AP_Cdma2000HORequiredIndication_specs_1	/* Additional specs */
};

