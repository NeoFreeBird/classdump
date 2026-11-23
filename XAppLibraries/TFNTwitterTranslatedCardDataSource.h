//
#ifndef TFNTwitterTranslatedCardDataSource_h
#define TFNTwitterTranslatedCardDataSource_h
@import Foundation;

#include "TFCCardData.h"
#include "TFCCardDataSource-Protocol.h"
#include "TFCCardDataSourceObject-Protocol.h"
#include "TFNTwitterCanonicalTimelineStatus-Protocol.h"
#include "TFNTwitterStatusCardDataSource-Protocol.h"

@class NSDictionary, NSObject, NSString, _TtC14TFSTwitterCore25TFSTwitterPromotedContent;
@protocol TAPTweetPerspective;

@interface TFNTwitterTranslatedCardDataSource : NSObject <TFNTwitterStatusCardDataSource>

@property (readonly, nonatomic) id <TFCCardDataSource> underlyingCardDataSource;
@property (readonly, nonatomic) TFCCardData *translatedCardData;
@property (readonly, nonatomic) TFCCardData *cardData;
@property (readonly, nonatomic) id <TFNTwitterCanonicalTimelineStatus, TFCCardDataSourceObject> sourceObject;
@property (readonly, nonatomic) NSDictionary *cardEvent;
@property (readonly, nonatomic) TFSTwitterCore.TFSTwitterPromotedContent *promotedContent;
@property (readonly, copy, nonatomic) NSDictionary *scribeItem;
@property (readonly, nonatomic) id <TAPTweetPerspective> tweet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUnderlyingCardDataSource:(id)source translatedCardData:(id)data;
- (id)entityForURL:(id)url;
- (_Bool)respondsToSelector:(SEL)selector;
- (id)forwardingTargetForSelector:(SEL)selector;

@end

#endif /* TFNTwitterTranslatedCardDataSource_h */
