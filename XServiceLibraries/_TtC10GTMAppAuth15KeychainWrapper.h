//
#ifndef _TtC10GTMAppAuth15KeychainWrapper_h
#define _TtC10GTMAppAuth15KeychainWrapper_h
@import Foundation;

#include "GTMKeychainHelper-Protocol.h"

@class NSSet, NSString, _$sSS, _$sSh -> GTMAppAuth.KeychainAttribute, _TtCs12_SwiftObject;

@interface GTMAppAuth.KeychainWrapper : Swift._SwiftObject <GTMKeychainHelper> // (Swift)

@property (nonatomic, readonly) NSString *accountName;
@property (nonatomic, readonly) NSSet *keychainAttributes;

/* instance methods */
- (id)initWithKeychainAttributes:(id)attributes;
- (id)keychainQueryForService:(id)service;
- (id)passwordForService:(id)service error:(id *)error;
- (id)passwordDataForService:(id)service error:(id *)error;
- (_Bool)removePasswordForService:(id)service error:(id *)error;
- (_Bool)setPassword:(id)password forService:(id)service error:(id *)error;
- (_Bool)setPassword:(id)password forService:(id)service accessibility:(id)accessibility error:(id *)error;
- (_Bool)setPasswordWithData:(id)data forService:(id)service accessibility:(id)accessibility error:(id *)error;

@end

#endif /* _TtC10GTMAppAuth15KeychainWrapper_h */
