//
#ifndef TUCGrokShareDetailsComponentModel_h
#define TUCGrokShareDetailsComponentModel_h
@import Foundation;

#include "TUCComponentModel-Protocol.h"
#include "TUCDestinationModel.h"

@class NSArray, NSObject, NSString, TFSTwitterUser;

@interface TUCGrokShareDetailsComponentModel : NSObject <TUCComponentModel>

@property (readonly, nonatomic) TUCDestinationModel *destination;
@property (readonly, nonatomic) NSArray *conversationPreview;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) TFSTwitterUser *profileUser;
@property (readonly, nonatomic) TFSTwitterUser *grokUser;
@property (readonly, nonatomic) NSString *metadataText;
@property (readonly, nonatomic) _Bool showAskGrokYourself;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSArray *axDestinations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)componentWithJSON:(id)json componentCreationContext:(id)context;

/* instance methods */
- (id)initWithDestination:(id)destination conversationPreview:(id)preview identifier:(id)identifier profileUser:(id)user grokUser:(id)user metadataText:(id)text showAskGrokYourself:(_Bool)yourself;
- (id)withPromotedContent:(id)content;
- (id)withDestinationTransform:(id /* block */)transform;
- (_Bool)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)userForSender:(id)sender;
- (id)grokConvoPreview;
- (id)profileConvoPreview;

@end

#endif /* TUCGrokShareDetailsComponentModel_h */
