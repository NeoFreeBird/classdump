//
#ifndef T1CameraCaptureResult_h
#define T1CameraCaptureResult_h
@import Foundation;

@class NSObject, TTMAsset;

@interface T1CameraCaptureResult : NSObject

@property (readonly, nonatomic) _Bool liveBroadcasted;
@property (readonly, nonatomic) TTMAsset *attachment;

/* instance methods */
- (id)init;
- (id)initWithLiveBroadcasted:(_Bool)broadcasted;
- (id)initWithAttachment:(id)attachment;

@end

#endif /* T1CameraCaptureResult_h */
