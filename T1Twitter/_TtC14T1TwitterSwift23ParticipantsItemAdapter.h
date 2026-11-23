//
#ifndef _TtC14T1TwitterSwift23ParticipantsItemAdapter_h
#define _TtC14T1TwitterSwift23ParticipantsItemAdapter_h
@import Foundation;

#include "T1UserOrRecommendationTableRowAdapter.h"

@class T1TwitterSwift.ParticipantsItemAdapterDelegate ?, _$sSo13TASSpaceModel_p;

@interface T1TwitterSwift.ParticipantsItemAdapter : T1UserOrRecommendationTableRowAdapter { // (Swift)
    /* instance variables */
    __C.TASSpaceModel spaceModel;
    T1TwitterSwift.ParticipantsItemAdapterDelegate ? participantsItemDelegate;
}

/* instance methods */
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (void)dataViewController:(id)controller didSelectItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)initWithAccount:(id)account scribeImpressionCache:(id)cache;

@end

#endif /* _TtC14T1TwitterSwift23ParticipantsItemAdapter_h */
