//
#ifndef TAVAnalyticsEvent_h
#define TAVAnalyticsEvent_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "TAVAnalyticsEventProtocol-Protocol.h"
#include "TAVAnalyticsSessionState.h"

@class NSObject, NSString, NSUUID;

@interface TAVAnalyticsEvent : NSObject <TAVAnalyticsEventProtocol, NSCoding>

@property (readonly, copy, nonatomic) NSUUID *playlistItemKey;
@property (readonly, copy, nonatomic) TAVAnalyticsSessionState *analyticsSessionState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)private_valueKeys;

/* instance methods */
- (id)init;
- (id)initWithPlaylistItemKey:(id)key analyticsSessionState:(id)state;
- (id)initWithAnalyticsSessionState:(id)state;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)private_dictionary;
- (_Bool)isEqual:(id)equal;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;

@end

#endif /* TAVAnalyticsEvent_h */
