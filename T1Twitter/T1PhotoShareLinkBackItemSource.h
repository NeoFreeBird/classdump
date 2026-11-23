//
#ifndef T1PhotoShareLinkBackItemSource_h
#define T1PhotoShareLinkBackItemSource_h
@import Foundation;

#include "UIActivityItemSource-Protocol.h"

@class NSMutableDictionary, NSObject, NSSet, NSString, TSShareLinkSession;

@interface T1PhotoShareLinkBackItemSource : NSObject <UIActivityItemSource> {
    /* instance variables */
    NSString *_statusURLString;
    NSSet *_allowedActivityTypes;
    TSShareLinkSession *_shareLinkSession;
    NSMutableDictionary *_resolvedURLsByActivityType;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithStatusURLString:(id)urlstring allowedActivityTypes:(id)types shareLinkSession:(id)session;
- (id)activityViewControllerPlaceholderItem:(id)item;
- (id)activityViewController:(id)controller itemForActivityType:(id)type;
- (void)logShareLinkShareForActivityType:(id)type;
- (id)_t1_linkBackTextWithURLString:(id)urlstring;

@end

#endif /* T1PhotoShareLinkBackItemSource_h */
