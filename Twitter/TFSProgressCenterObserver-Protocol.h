//
#ifndef TFSProgressCenterObserver_Protocol_h
#define TFSProgressCenterObserver_Protocol_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSObject-Protocol.h"

@protocol TFSProgressCenterObserver <NSObject>

@required

@property (nonatomic, readonly) id <NSCopying> uniqueID;

@optional

/* optional instance methods */
- (void)progressCenter:(id)center didStartProgress:(id)progress;
- (void)progressCenter:(id)center didStartProgress:(id)progress;
- (void)progressCenter:(id)center didUpdateProgress:(id)progress;
- (void)progressCenter:(id)center didUpdateProgress:(id)progress;
- (void)progressCenter:(id)center didCompleteProgress:(id)progress;
- (void)progressCenter:(id)center didCompleteProgress:(id)progress;
- (void)progressCenter:(id)center didEndProgressingWithUniqueID:(id)id outcome:(long long)outcome;

@end

#endif /* TFSProgressCenterObserver_Protocol_h */
