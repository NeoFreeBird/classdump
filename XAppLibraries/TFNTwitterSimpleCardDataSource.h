//
#ifndef TFNTwitterSimpleCardDataSource_h
#define TFNTwitterSimpleCardDataSource_h
@import Foundation;

#include "TFCCardData.h"
#include "TFCCardDataSource-Protocol.h"
#include "TFCCardDataSourceObject-Protocol.h"

@class NSDictionary, NSObject, NSString, _TtC14TFSTwitterCore25TFSTwitterPromotedContent;
@protocol TAPTweetPerspective;

@interface TFNTwitterSimpleCardDataSource : NSObject <TFCCardDataSource>

@property (readonly, nonatomic) TFCCardData *cardData;
@property (readonly, nonatomic) NSDictionary *cardEvent;
@property (readonly, weak, nonatomic) id <TFCCardDataSourceObject> sourceObject;
@property (readonly, nonatomic) TFSTwitterCore.TFSTwitterPromotedContent *promotedContent;
@property (readonly, copy, nonatomic) NSDictionary *scribeItem;
@property (readonly, nonatomic) id <TAPTweetPerspective> tweet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithCardData:(id)data;
- (long long)sourceID;
- (id)entityForURL:(id)url;
- (_Bool)isEqual:(id)equal;

@end

#endif /* TFNTwitterSimpleCardDataSource_h */
