//
#ifndef TFSMutableBidirectionalMap_h
#define TFSMutableBidirectionalMap_h
@import Foundation;

#include "TFSMutableBidirectionalMapLeftToRightScripter.h"
#include "TFSMutableBidirectionalMapRightToLeftScripter.h"
#include "TFSMutableKeySubscripting-Protocol.h"

@class NSMutableDictionary, NSObject;

@interface TFSMutableBidirectionalMap : NSObject {
    /* instance variables */
    TFSMutableBidirectionalMapRightToLeftScripter *_rightToLeftScripter;
    TFSMutableBidirectionalMapLeftToRightScripter *_leftToRightScripter;
}

@property (readonly, nonatomic) id <TFSMutableKeySubscripting> leftToRight;
@property (readonly, nonatomic) id <TFSMutableKeySubscripting> rightToLeft;

/* instance methods */
- (void)dealloc;
- (id)init;
- (id)initWithLefts:(id)lefts andRights:(id)rights;
- (void)getAllLefts:(id *)lefts andAllRights:(id *)rights;
- (unsigned long long)count;
- (void)setLeft:(id)left andRight:(id)right;
- (id)leftForRight:(id)right;
- (id)rightForLeft:(id)left;
- (void)removePairWithLeft:(id)left;
- (void)removePairWithRight:(id)right;
- (id)description;
- (_Bool)isEqual:(id)equal;
- (unsigned long long)hash;

@end

#endif /* TFSMutableBidirectionalMap_h */
