//
#ifndef _TtC14TFSTwitterCore27TFSTwitterScribeAssociation_h
#define _TtC14TFSTwitterCore27TFSTwitterScribeAssociation_h
@import Foundation;

@class NSDictionary, NSObject, _$sSSSg, _$sSSSg4page_AA7sectionAA9componentAA7elementtSg, _$sSiSg, __C.TFSTwitterScribeAssociationTypeType;

@interface TFSTwitterCore.TFSTwitterScribeAssociation : NSObject { // (Swift)
    /* instance variables */
    Swift.String? associationID;
    Swift.Int? associationType;
    (page: Swift.String?, section: Swift.String?, component: Swift.String?, element: Swift.String?)? namespace;
}

@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NSDictionary *scribeParameters;

/* class methods */
+ (void)scribeParameters:(id)parameters add:(id)add;

/* instance methods */
- (id)initWithType:(long long)type associationID:(id)id;
- (id)withPage:(id)page section:(id)section component:(id)component element:(id)element;
- (id)init;

@end

#endif /* _TtC14TFSTwitterCore27TFSTwitterScribeAssociation_h */
