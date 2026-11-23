//
#ifndef TFSModelContextProvider_Protocol_h
#define TFSModelContextProvider_Protocol_h
@import Foundation;

@class TFSModelContext;

@protocol TFSModelContextProvider

@required

@property (nonatomic, readonly) TFSModelContext *modelContext;

@optional

@end

#endif /* TFSModelContextProvider_Protocol_h */
