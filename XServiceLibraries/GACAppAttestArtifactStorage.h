//
#ifndef GACAppAttestArtifactStorage_h
#define GACAppAttestArtifactStorage_h
@import Foundation;

#include "GACAppAttestArtifactStorageProtocol-Protocol.h"
#include "GULKeychainStorage.h"

@class NSObject, NSString;

@interface GACAppAttestArtifactStorage : NSObject <GACAppAttestArtifactStorageProtocol>

@property (readonly, nonatomic) NSString *keySuffix;
@property (readonly, nonatomic) GULKeychainStorage *keychainStorage;
@property (readonly, nonatomic) NSString *accessGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithKeySuffix:(id)suffix keychainStorage:(id)storage accessGroup:(id)group;
- (id)initWithKeySuffix:(id)suffix accessGroup:(id)group;
- (id)getArtifactForKey:(id)key;
- (id)setArtifact:(id)artifact forKey:(id)key;
- (id)storeArtifact:(id)artifact forKey:(id)key;
- (id)artifactKey;

@end

#endif /* GACAppAttestArtifactStorage_h */
