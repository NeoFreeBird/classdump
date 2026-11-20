//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef ONBComponentCollectionViewModel_h
#define ONBComponentCollectionViewModel_h
@import Foundation;

#include "OCFAnnounceable-Protocol.h"
#include "OCFNavigationLinkHandler-Protocol.h"
#include "OCFSubtaskDataProvider-Protocol.h"

@class NSHashTable, NSNumber, NSObject, NSString, OCFComponentCollection, OCFRichText, TFNTwitterAccount;

@interface ONBComponentCollectionViewModel : NSObject <OCFAnnounceable> {
    /* instance variables */
    NSHashTable *_observers;
    long long _pendingUpdates;
}

@property (readonly, nonatomic) TFNTwitterAccount *account;
@property (readonly, nonatomic) OCFComponentCollection *componentCollection;
@property (readonly, nonatomic) id <OCFSubtaskDataProvider> subtaskDataProvider;
@property (readonly, weak, nonatomic) id <OCFNavigationLinkHandler> navigationLinkHandler;
@property (readonly, nonatomic) long long options;
@property (readonly, nonatomic) _Bool fullBleedHeaderImage;
@property (readonly, nonatomic) NSString *backMenuTitle;
@property (nonatomic) _Bool primaryNextButtonEnabled;
@property (nonatomic) _Bool primarySkipButtonEnabled;
@property (nonatomic) _Bool primaryNextButtonHidden;
@property (nonatomic) _Bool primarySkipButtonHidden;
@property (retain, nonatomic) OCFRichText *primaryDetailRichText;
@property (retain, nonatomic) OCFRichText *primaryNextButtonRichText;
@property (retain, nonatomic) OCFRichText *primarySkipButtonRichText;
@property (retain, nonatomic) NSNumber *primaryDetailNumberValue;
@property (retain, nonatomic) NSNumber *primaryNextButtonNumberValue;
@property (retain, nonatomic) NSNumber *primarySkipButtonNumberValue;
@property (nonatomic) _Bool waitIndicatorEnabled;
@property (nonatomic) _Bool waitIndicatorVisible;
@property (nonatomic) _Bool primaryDetailVisible;
@property (readonly, nonatomic) _Bool hasHeaderComponents;
@property (readonly, nonatomic) _Bool hasFooterComponents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)titleTextInComponentCollection:(id)collection;
+ (id)private_titleTextInObject:(id)object;

/* instance methods */
- (id)initWithAccount:(id)account componentCollection:(id)collection subtaskDataProvider:(id)provider navigationLinkHandler:(id)handler options:(long long)options;
- (id)initWithAccount:(id)account header:(id)header subtaskDataProvider:(id)provider navigationLinkHandler:(id)handler nextLabel:(id)label skipLabel:(id)label detailText:(id)text layout:(long long)layout;
- (id)initWithNextLabel:(id)label skipLabel:(id)label;
- (_Bool)hasFullBleedHeaderImage;
- (void)addObserver:(id)observer;
- (void)private_postUpdateWithType:(long long)type;
- (id)ocf_voiceoverPresentationAnnouncement;

@end

#endif /* ONBComponentCollectionViewModel_h */
