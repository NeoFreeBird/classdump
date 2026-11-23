//
#ifndef TFSVersionProvider_h
#define TFSVersionProvider_h
@import Foundation;

@class NSObject;

@interface TFSVersionProvider : NSObject

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (_Bool)isRunningAsAppClip;
- (id)platform;
- (id)appName;
- (id)osVersion;
- (id)clientVersion;

@end

#endif /* TFSVersionProvider_h */
