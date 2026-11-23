//
#ifndef TFSTwitterSSOConnection_h
#define TFSTwitterSSOConnection_h
@import Foundation;

#include "TFSPlistSerialization-Protocol.h"

@class NSObject, NSString;

@interface TFSTwitterSSOConnection : NSObject <TFSPlistSerialization>

@property (readonly, nonatomic) unsigned long long ssoProvider;
@property (readonly, nonatomic) NSString *ssoIDHash;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSSOProvider:(unsigned long long)ssoprovider ssoIDHash:(id)idhash;
- (id)initWithJSONDictionary:(id)jsondictionary;
- (_Bool)isEqual:(id)equal;
- (id)initWithPlistDictionary:(id)dictionary;
- (id)plistDictionaryValue;
- (unsigned long long)tfs_ssoProviderFromString:(id)string;

@end

#endif /* TFSTwitterSSOConnection_h */
