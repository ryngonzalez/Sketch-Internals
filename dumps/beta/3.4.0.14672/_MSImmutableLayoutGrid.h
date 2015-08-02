//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSImmutableBaseGrid.h"

__attribute__((visibility("hidden")))
@interface _MSImmutableLayoutGrid : MSImmutableBaseGrid
{
    double _columnWidth;
    BOOL _drawHorizontal;
    BOOL _drawHorizontalLines;
    BOOL _drawVertical;
    double _gutterHeight;
    double _gutterWidth;
    BOOL _guttersOutside;
    double _horizontalOffset;
    double _numberOfColumns;
    double _rowHeightMultiplication;
    double _totalWidth;
}

@property(nonatomic) double totalWidth; // @synthesize totalWidth=_totalWidth;
@property(nonatomic) double rowHeightMultiplication; // @synthesize rowHeightMultiplication=_rowHeightMultiplication;
@property(nonatomic) double numberOfColumns; // @synthesize numberOfColumns=_numberOfColumns;
@property(nonatomic) double horizontalOffset; // @synthesize horizontalOffset=_horizontalOffset;
@property(nonatomic) BOOL guttersOutside; // @synthesize guttersOutside=_guttersOutside;
@property(nonatomic) double gutterWidth; // @synthesize gutterWidth=_gutterWidth;
@property(nonatomic) double gutterHeight; // @synthesize gutterHeight=_gutterHeight;
@property(nonatomic) BOOL drawVertical; // @synthesize drawVertical=_drawVertical;
@property(nonatomic) BOOL drawHorizontalLines; // @synthesize drawHorizontalLines=_drawHorizontalLines;
@property(nonatomic) BOOL drawHorizontal; // @synthesize drawHorizontal=_drawHorizontal;
@property(nonatomic) double columnWidth; // @synthesize columnWidth=_columnWidth;
- (BOOL)hasDefaultValues;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (id)initWithMutableModelObject:(id)arg1;

@end

