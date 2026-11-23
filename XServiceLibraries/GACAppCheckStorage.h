//
#ifndef GACAppCheckStorage_h
#define GACAppCheckStorage_h
@import Foundation;

#include "GACAppCheckStorageProtocol-Protocol.h"
#include "GULKeychainStorage.h"

@class NSObject, NSString;

@interface GACAppCheckStorage : NSObject <GACAppCheckStorageProtocol>

@property (readonly, nonatomic) NSString *tokenKey;
@property (readonly, nonatomic) GULKeychainStorage *keychainStorage;
@property (readonly, nonatomic) NSString *accessGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithTokenKey:(id)key keychainStorage:(id)storage accessGroup:(id)group;
- (id)initWithTokenKey:(id)key accessGroup:(id)group;
- (id)getToken;
- (id)setToken:(id)token;
- (id)storeToken:(id)token;

@end

#endif /* GACAppCheckStorage_h */
