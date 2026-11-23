//
#ifndef GADOMIDLoadTask_h
#define GADOMIDLoadTask_h
@import Foundation;

@class NSObject, NSURLRequest;
@protocol OS_dispatch_queue;

@interface GADOMIDLoadTask : NSObject

@property (readonly, nonatomic) NSURLRequest *request;
@property (readonly, nonatomic) unsigned long long attemptsCount;
@property (readonly, nonatomic) unsigned long long attemptNumber;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *completionQueue;
@property (copy, nonatomic) id /* block */ responseParser;
@property (copy, nonatomic) id /* block */ completionHandler;

/* class methods */
+ (id)sharedSession;
+ (id)taskToLoadStringFromURL:(id)url attemptsCount:(unsigned long long)count completionHandler:(id /* block */)handler;
+ (id)taskToLoadStringFromURL:(id)url attemptsCount:(unsigned long long)count completionQueue:(id)queue completionHandler:(id /* block */)handler;
+ (id)taskToSendPingToURL:(id)url completionQueue:(id)queue completionHandler:(id /* block */)handler;

/* instance methods */
- (id)initWithURL:(id)url cachePolicy:(unsigned long long)policy attemptsCount:(unsigned long long)count completionQueue:(id)queue;
- (void)start;
- (void)handleResponseWithData:(id)data error:(id)error;

@end

#endif /* GADOMIDLoadTask_h */
