//
#ifndef TFNExecutionContextProvider_h
#define TFNExecutionContextProvider_h
@import Foundation;

@class NSObject;

@interface TFNExecutionContextProvider : NSObject

/* class methods */
+ (void)setSharedContext:(id)context;
+ (id)sharedContext;

@end

#endif /* TFNExecutionContextProvider_h */
