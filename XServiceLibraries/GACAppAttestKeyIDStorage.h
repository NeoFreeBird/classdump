//
#ifndef GACAppAttestKeyIDStorage_h
#define GACAppAttestKeyIDStorage_h
@import Foundation;

#include "GACAppAttestKeyIDStorageProtocol-Protocol.h"
#include "GULUserDefaults.h"

@class NSObject, NSString;

@interface GACAppAttestKeyIDStorage : NSObject <GACAppAttestKeyIDStorageProtocol>

@property (readonly, nonatomic) NSString *keySuffix;
@property (readonly, nonatomic) GULUserDefaults *userDefaults;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithKeySuffix:(id)suffix;
- (id)setAppAttestKeyID:(id)id;
- (id)getAppAttestKeyID;
- (void)storeAppAttestKeyID:(id)id;
- (id)appAttestKeyIDFromStorage;
- (id)keyIDStorageKey;

@end

#endif /* GACAppAttestKeyIDStorage_h */
