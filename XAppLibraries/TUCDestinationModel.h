//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUCDestinationModel_h
#define TUCDestinationModel_h
@import Foundation;

#include "TUCAppStoreDestinationData-Protocol.h"
#include "TUCAppStoreWithDockedMediaDestinationData-Protocol.h"
#include "TUCBrowserDestinationData-Protocol.h"
#include "TUCBrowserWithDockedMediaDestinationData-Protocol.h"
#include "TUCButtonData.h"
#include "TUCPlayableDestinationData-Protocol.h"
#include "TUCProfileDestinationData-Protocol.h"
#include "TUCTweetComposerDestinationData-Protocol.h"
#include "TUCXPaymentDestinationData-Protocol.h"

@class NSObject, NSString, NSURL, TFSTwitterEntityMedia;

@interface TUCDestinationModel : NSObject { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 tweetComposerText;
    @40@0:8:16@24@32 appStoreData;
    @40@0:8:16@24@32 isBrowserFallbackEnabled;
    @40@0:8:16@24@32 isUniversalLinkAllowed;
    @40@0:8:16@24@32 userID;
    @40@0:8:16@24@32 paymentVariantID;
}

@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, copy) NSString *vanityURLString;
@property (nonatomic, copy) NSString *vanityTitle;
@property (nonatomic, copy) NSString *websiteCTACardLabel;
@property (nonatomic, readonly) TFSTwitterEntityMedia *mediaEntity;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, retain) TUCButtonData *button;
@property (nonatomic, readonly) id <TUCBrowserDestinationData> browserData;
@property (nonatomic, readonly) id <TUCBrowserWithDockedMediaDestinationData> browserWithDockedMediaData;
@property (nonatomic, readonly) id <TUCAppStoreDestinationData> appStore;
@property (nonatomic, readonly) id <TUCAppStoreWithDockedMediaDestinationData> appStoreWithDockedMediaData;
@property (nonatomic, readonly) id <TUCTweetComposerDestinationData> tweetComposerData;
@property (nonatomic, readonly) id <TUCPlayableDestinationData> playableData;
@property (nonatomic, readonly) id <TUCProfileDestinationData> profileData;
@property (nonatomic, readonly) id <TUCXPaymentDestinationData> paymentData;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

/* instance methods */
- (id)eventMetadataWithPresenterResult:(id)result;
- (id)eventTypeKey;
- (id)singularAccessibilityString;
- (id)pluralAccessibilityString;
- (id)actionAccessibilityStringWithInfo:(id)info;
- (id)initWithType:(unsigned long long)type url:(id)url vanityURLString:(id)urlstring vanityTitle:(id)title mediaEntity:(id)entity appStoreData:(id)data tweetComposerText:(id)text isBrowserFallbackEnabled:(_Bool)enabled isUniversalLinkAllowed:(_Bool)allowed button:(id)button userID:(id)id websiteCTACardLabel:(id)label paymentVariantID:(id)id;
- (id)initWithDictionary:(id)dictionary mediaEntitiesDict:(id)dict appStoreDataDict:(id)dict isIPhone:(_Bool)iphone experimentSignals:(id)signals creationContext:(id)context;
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* TUCDestinationModel_h */
