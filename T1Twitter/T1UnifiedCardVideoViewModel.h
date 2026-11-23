//
#ifndef T1UnifiedCardVideoViewModel_h
#define T1UnifiedCardVideoViewModel_h
@import Foundation;

#include "T1InlineMediaViewModel-Protocol.h"
#include "TVPPlayerSessionSource-Protocol.h"

@class NSObject, NSString, TAVPlayerSessionProducer, TUCMediaComponentModel;

@interface T1UnifiedCardVideoViewModel : NSObject <T1InlineMediaViewModel>

@property (readonly, nonatomic) TUCMediaComponentModel *mediaComponent;
@property (readonly, nonatomic) TAVPlayerSessionProducer *playerSessionProducer;
@property (readonly, nonatomic) id <TVPPlayerSessionSource> playerSessionSource;
@property (readonly, nonatomic) unsigned long long mediaType;
@property (readonly, nonatomic) unsigned long long playerIconViewType;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } pillViewTime;
@property (readonly, nonatomic) _Bool watchAgainButtonEnabled;
@property (readonly, nonatomic) _Bool shouldShowAdCountdownForQuotedTweet;
@property (readonly, nonatomic) NSString *vanityURLString;
@property (readonly, nonatomic) NSString *vanityTitle;
@property (readonly, nonatomic) _Bool shouldShowLoadingIndicator;
@property (readonly, nonatomic) NSString *adDisplayLocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithMediaComponent:(id)component hideVanity:(_Bool)vanity trimVanityZeroWidthCharacters:(_Bool)characters;
- (id)mediaEntity;

@end

#endif /* T1UnifiedCardVideoViewModel_h */
