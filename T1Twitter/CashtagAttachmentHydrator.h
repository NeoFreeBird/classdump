//
#ifndef CashtagAttachmentHydrator_h
#define CashtagAttachmentHydrator_h
@import Foundation;

@class NSObject;

@interface CashtagAttachmentHydrator : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *actionService;
    NSNumber"16@0:8 *fetcher;
}

/* class methods */
+ (void)fetchSmartTagInfoWithRestId:(id)id accountID:(id)id completion:(id /* block */)completion;

/* instance methods */
- (id)initWithAccountID:(id)id;
- (void)hydrateAttachmentsOn:(id)on completion:(id /* block */)completion;
- (id)init;

@end

#endif /* CashtagAttachmentHydrator_h */
