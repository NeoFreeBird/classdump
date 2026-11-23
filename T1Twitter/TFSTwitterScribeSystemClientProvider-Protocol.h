//
#ifndef TFSTwitterScribeSystemClientProvider_Protocol_h
#define TFSTwitterScribeSystemClientProvider_Protocol_h
@import Foundation;

@class NSString;

@protocol TFSTwitterScribeSystemClientProvider

@required

@property (readonly, copy, nonatomic) NSString *scribeClientName;

@optional

@end

#endif /* TFSTwitterScribeSystemClientProvider_Protocol_h */
