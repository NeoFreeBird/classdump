//
#ifndef TAVAnalyticsClientEventTestValue_h
#define TAVAnalyticsClientEventTestValue_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "TAVAnalyticsEvent.h"
#include "TAVAnalyticsPlaylistMetadata.h"

@class NSObject, NSString;

@interface TAVAnalyticsClientEventTestValue : NSObject <NSCoding>

@property (retain, nonatomic) TAVAnalyticsEvent *event;
@property (retain, nonatomic) TAVAnalyticsPlaylistMetadata *playlistMetadata;
@property (retain, nonatomic) NSString *eventData;

/* instance methods */
- (id)initWithEvent:(id)event playlistMetadata:(id)metadata eventData:(id)data;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;

@end

#endif /* TAVAnalyticsClientEventTestValue_h */
