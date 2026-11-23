//
#ifndef _TtC8ElkSwift17GridContainerCell_h
#define _TtC8ElkSwift17GridContainerCell_h
@import Foundation;

#include "_TtC8ElkSwift13ContainerCell.h"

@class ElkSwift.ElkRectangle, ElkSwift.KVector ?, Swift.Bool, _$sSaySa -> ElkSwift.Cell _$sSgG, _$sSd;

@interface ElkSwift.GridContainerCell : ElkSwift.ContainerCell { // (Swift)
    /* instance variables */
    Swift.Double gap;
    Swift.Bool tabular;
    Swift.Bool symmetrical;
    Swift.Array empty-list Swift.Array -> ElkSwift.Cell _$sSgG cells;
    ElkSwift.KVector ? centerCellMinimumSize;
    Swift.Bool onlyCenterCellContributesToMinimumSize;
    ElkSwift.ElkRectangle centerCellRect;
}

@end

#endif /* _TtC8ElkSwift17GridContainerCell_h */
