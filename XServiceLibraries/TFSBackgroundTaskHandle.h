//
#ifndef TFSBackgroundTaskHandle_h
#define TFSBackgroundTaskHandle_h
@import Foundation;

@class NSObject, NSString;
@protocol TFSBackgroundTaskHandleDelegate;

@interface TFSBackgroundTaskHandle : NSObject

@property (weak, nonatomic) id <TFSBackgroundTaskHandleDelegate> delegate;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *name;

/* instance methods */
- (id)init;
- (id)initWithIdentifier:(id)identifier name:(id)name delegate:(id)delegate;
- (void)dealloc;

@end

#endif /* TFSBackgroundTaskHandle_h */
