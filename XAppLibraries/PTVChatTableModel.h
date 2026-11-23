//
#ifndef PTVChatTableModel_h
#define PTVChatTableModel_h
@import Foundation;

#include "PTVWeakSet.h"

@class NSArray, NSMutableArray, NSObject;

@interface PTVChatTableModel : NSObject {
    /* instance variables */
    PTVWeakSet *_observers;
}

@property (readonly, nonatomic) NSArray *messages;
@property (readonly, nonatomic) _Bool numberOfChatMessages;
@property (readonly, nonatomic) unsigned long long numberOfUnreadMessages;

/* instance methods */
- (id)init;
- (void)addObserver:(id)observer;
- (void)removeObserver:(id)observer;
- (void)notifyWithBlock:(id /* block */)block;
- (void)appendMessage:(id)message;
- (void)replaceMessagesWithMessages:(id)messages;
- (void)reduceNumberOfMessagesTo:(unsigned long long)to;
- (void)clearMessages;
- (_Bool)markMessagesReadAtOrBeforeIndex:(unsigned long long)index;
- (void)updateNumberOfUnreadMessages;

@end

#endif /* PTVChatTableModel_h */
