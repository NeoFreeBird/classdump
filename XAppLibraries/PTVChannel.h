//
#ifndef PTVChannel_h
#define PTVChannel_h
@import Foundation;

#include "PTVProfileImageEntity-Protocol.h"

@class NSArray, NSObject, NSString;

@interface PTVChannel : NSObject <PTVProfileImageEntity>

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *remoteID;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long nLiveBroadcasts;
@property (nonatomic) unsigned long long nReplayBroadcasts;
@property (retain, nonatomic) NSArray *profileImageUrls;
@property (readonly, nonatomic) _Bool isModeratorGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (_Bool)isEqual:(id)equal;
- (void)loadImageEntityForWorkClient:(id)client withProfileImageType:(unsigned long long)type;
- (id)profileImageURLForType:(unsigned long long)type;
- (id)initWithDictionary:(id)dictionary;
- (void)unpackDictionary:(id)dictionary;

@end

#endif /* PTVChannel_h */
