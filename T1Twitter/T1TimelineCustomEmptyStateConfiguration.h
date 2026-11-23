//
#ifndef T1TimelineCustomEmptyStateConfiguration_h
#define T1TimelineCustomEmptyStateConfiguration_h
@import Foundation;

@class NSObject, TFNEmptyStateConfiguration, TFSTwitterScribeContext;

@interface T1TimelineCustomEmptyStateConfiguration : NSObject

@property (retain, nonatomic) TFNEmptyStateConfiguration *emptyStateConfiguration;
@property (retain, nonatomic) TFSTwitterScribeContext *scribeContext;

/* instance methods */
- (id)initWithEmptyStateConfiguration:(id)configuration scribeContext:(id)context;

@end

#endif /* T1TimelineCustomEmptyStateConfiguration_h */
