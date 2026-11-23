//
#ifndef TUCPosterMetadata_h
#define TUCPosterMetadata_h
@import Foundation;

@class NSObject, NSString;

@interface TUCPosterMetadata : NSObject // (Swift)

@property (nonatomic, readonly) NSString *caption;

/* instance methods */
- (id)initWithJsonDictionary:(id)dictionary;
- (id)initWithIsPosterAd:(_Bool)ad posterCaption:(id)caption;
- (id)initWithCaption:(id)caption;
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* TUCPosterMetadata_h */
