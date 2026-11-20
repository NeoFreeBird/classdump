//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVAPIUtil_h
#define PTVAPIUtil_h
@import Foundation;

@class NSObject;

@interface PTVAPIUtil : NSObject

/* class methods */
+ (id)addLanguagesToQuery:(id)query;
+ (void)RefreshBroadcasts:(id)broadcasts fullAPIPath:(id)apipath Parameters:(id)parameters CompletionBlock:(id /* block */)block LoggedInUserDelegate:(id)delegate;

@end

#endif /* PTVAPIUtil_h */
