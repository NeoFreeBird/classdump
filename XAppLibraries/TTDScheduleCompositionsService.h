//
#ifndef TTDScheduleCompositionsService_h
#define TTDScheduleCompositionsService_h
@import Foundation;

@class NSArray, NSDate, NSObject;

@interface TTDScheduleCompositionsService : NSObject { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 account;
    @40@0:8:16@24@32 authenticateRequestHandler;
    @40@0:8:16@24@32 dataService;
}

/* instance methods */
- (id)initWithAccount:(id)account authenticateRequestHandler:(id /* block */)handler;
- (void)scheduleCompositions:(NSArray *)compositions executeAt:(NSDate *)at completionHandler:(id /* block */)handler;
- (id)init;

@end

#endif /* TTDScheduleCompositionsService_h */
