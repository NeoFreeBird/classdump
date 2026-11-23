//
#ifndef TEKAPITypeaheadRequest_h
#define TEKAPITypeaheadRequest_h
@import Foundation;

#include "TEKAPIRequest.h"

@class NSString, NSURL;

@interface TEKAPITypeaheadRequest : TEKAPIRequest {
    /* instance variables */
    NSURL *_URL;
}

@property (readonly, copy, nonatomic) NSString *query;
@property (nonatomic) unsigned long long count;

/* instance methods */
- (id)initWithQuery:(id)query;
- (id)typeaheadType;
- (id)endpointPath;
- (id)parameters;
- (id)configuration;

@end

#endif /* TEKAPITypeaheadRequest_h */
