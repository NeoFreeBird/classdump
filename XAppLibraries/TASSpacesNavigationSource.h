//
#ifndef TASSpacesNavigationSource_h
#define TASSpacesNavigationSource_h
@import Foundation;

#include "TFNTwitterStatus.h"

@class NSNumber, NSObject, NSString, TFSTwitterScribeContext;

@interface TASSpacesNavigationSource : NSObject // (Swift)

@property (nonatomic, readonly) TFSTwitterScribeContext *scribeContext;
@property (nonatomic, readonly) NSNumber *rankVertical;
@property (nonatomic, readonly) NSString *audioFeedID;
@property (nonatomic, readonly) NSString *conferenceKey;
@property (nonatomic, readonly) TFNTwitterStatus *entryStatus;

/* instance methods */
- (id)initWithScribeContext:(id)context;
- (id)initWithScribeContext:(id)context entryStatus:(id)status;
- (id)initWithScribeContext:(id)context conferenceKey:(id)key;
- (id)init;

@end

#endif /* TASSpacesNavigationSource_h */
