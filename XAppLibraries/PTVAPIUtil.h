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
