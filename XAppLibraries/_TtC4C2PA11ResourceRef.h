//
#ifndef _TtC4C2PA11ResourceRef_h
#define _TtC4C2PA11ResourceRef_h
@import Foundation;

#include "_TtC4C2PA13UriOrResource.h"

@class _$sSS, _$sSSSg, _$sSa -> C2PA.AssetType ?;

@interface C2PA.ResourceRef : C2PA.UriOrResource { // (Swift)
    /* instance variables */
    Swift.Array -> C2PA.AssetType ? dataTypes;
    Swift.String format;
    Swift.String? hash;
    Swift.String identifier;
}

@end

#endif /* _TtC4C2PA11ResourceRef_h */
