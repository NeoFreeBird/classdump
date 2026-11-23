//
#ifndef _TtC8TFSModel18ModelHydrationNode_h
#define _TtC8TFSModel18ModelHydrationNode_h
@import Foundation;

#include "_TtC8TFSModel14DependencyNode.h"

@class TFSModel.DependencyNodeState TFSModel.ModelObjects models_Sh TFSModel.ModelIdentifier _$sG7missingAE7updatedt ->, _$sSD -> TFSModel.DependencyNode TFSModel.ModelIdentifier, _$sSD -> TFSModel.ModelIdentifier TFSModel.DependencySource, _$sSS, _$sSh -> TFSModel.ModelIdentifier;

@interface TFSModel.ModelHydrationNode : TFSModel.DependencyNode { // (Swift)
    /* instance variables */
    Swift.Set -> TFSModel.ModelIdentifier rootDependencies;
    Swift.Dictionary -> TFSModel.ModelIdentifier TFSModel.DependencySource sourceNodes;
    Swift.Dictionary -> TFSModel.DependencyNode TFSModel.ModelIdentifier nodeToIdentifierMap;
    TFSModel.DependencyNodeState TFSModel.ModelObjects models_Sh TFSModel.ModelIdentifier _$sG7missingAE7updatedt -> privateState;
    Swift.String logIdentifier;
    Swift.Set -> TFSModel.ModelIdentifier updatedModelIdentifiers;
}

@end

#endif /* _TtC8TFSModel18ModelHydrationNode_h */
