/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-OER -gen-PER -no-gen-example -D ngap`
 */

#ifndef	_ASN_NGAP_MobilityRestrictionList_H_
#define	_ASN_NGAP_MobilityRestrictionList_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ASN_NGAP_PLMNIdentity.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ASN_NGAP_EquivalentPLMNs;
struct ASN_NGAP_RATRestrictions;
struct ASN_NGAP_ForbiddenAreaInformation;
struct ASN_NGAP_ServiceAreaInformation;
struct ASN_NGAP_ProtocolExtensionContainer;

/* ASN_NGAP_MobilityRestrictionList */
typedef struct ASN_NGAP_MobilityRestrictionList {
	ASN_NGAP_PLMNIdentity_t	 servingPLMN;
	struct ASN_NGAP_EquivalentPLMNs	*equivalentPLMNs;	/* OPTIONAL */
	struct ASN_NGAP_RATRestrictions	*rATRestrictions;	/* OPTIONAL */
	struct ASN_NGAP_ForbiddenAreaInformation	*forbiddenAreaInformation;	/* OPTIONAL */
	struct ASN_NGAP_ServiceAreaInformation	*serviceAreaInformation;	/* OPTIONAL */
	struct ASN_NGAP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_NGAP_MobilityRestrictionList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ASN_NGAP_MobilityRestrictionList;
extern asn_SEQUENCE_specifics_t asn_SPC_ASN_NGAP_MobilityRestrictionList_specs_1;
extern asn_TYPE_member_t asn_MBR_ASN_NGAP_MobilityRestrictionList_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_NGAP_MobilityRestrictionList_H_ */
#include <asn_internal.h>
