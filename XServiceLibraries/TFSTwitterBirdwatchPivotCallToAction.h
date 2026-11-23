//
#ifndef TFSTwitterBirdwatchPivotCallToAction_h
#define TFSTwitterBirdwatchPivotCallToAction_h
@import Foundation;

@class NSObject, NSString;

@interface TFSTwitterBirdwatchPivotCallToAction : NSObject // (Swift)

@property (nonatomic) long long birdwatchPivotActionType;
@property (nonatomic, copy) NSString *destinationURL;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *prompt;
@property (nonatomic, readonly) long long hash;

/* instance methods */
- (_Bool)isEqual:(id)equal;
- (id)initWithCoder:(id)coder;
- (void)encodeWith:(id)with;
- (id)init;

@end

#endif /* TFSTwitterBirdwatchPivotCallToAction_h */
