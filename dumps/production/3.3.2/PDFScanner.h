//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary, NSSet;

@interface PDFScanner : NSObject
{
    NSDictionary *_dictionary;
    struct CGPDFOperatorTable *_table;
    struct CGPDFScanner *_scanner;
    struct CGPDFContentStream *_stream;
    NSMutableDictionary *_fonts;
    NSSet *_fontTypesToMap;
    NSDictionary *_encodingMap;
}

+ (id)convertObject:(union CGPDFObject *)arg1;
+ (id)convertDictionary:(struct CGPDFDictionary *)arg1;
+ (id)convertArray:(struct CGPDFArray *)arg1;
@property(retain, nonatomic) NSDictionary *encodingMap; // @synthesize encodingMap=_encodingMap;
@property(retain, nonatomic) NSSet *fontTypesToMap; // @synthesize fontTypesToMap=_fontTypesToMap;
@property(retain, nonatomic) NSMutableDictionary *fonts; // @synthesize fonts=_fonts;
@property(nonatomic) struct CGPDFContentStream *stream; // @synthesize stream=_stream;
@property(nonatomic) struct CGPDFScanner *scanner; // @synthesize scanner=_scanner;
@property(nonatomic) struct CGPDFOperatorTable *table; // @synthesize table=_table;
@property(retain, nonatomic) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;
- (void).cxx_destruct;
- (void)operatorglyphBoundsWithInfo:(id)arg1;
- (void)registerOperatorglyphBounds;
- (void)operatordeclareGlyphWithInfo:(id)arg1;
- (void)registerOperatordeclareGlyph;
- (void)operatorendTextWithInfo:(id)arg1;
- (void)registerOperatorendText;
- (void)operatortextArrayWithInfo:(id)arg1;
- (void)registerOperatortextArray;
- (void)operatortextWithInfo:(id)arg1;
- (void)registerOperatortext;
- (void)operatortextSetMatrixWithInfo:(id)arg1;
- (void)registerOperatortextSetMatrix;
- (void)operatornextLineAndTextWithSpacingWithInfo:(id)arg1;
- (void)registerOperatornextLineAndTextWithSpacing;
- (void)operatornextLineAndTextWithInfo:(id)arg1;
- (void)registerOperatornextLineAndText;
- (void)operatornextLineWithInfo:(id)arg1;
- (void)registerOperatornextLine;
- (void)operatortextNextLineSetLeadingWithInfo:(id)arg1;
- (void)registerOperatortextNextLineSetLeading;
- (void)operatortextNextLineWithInfo:(id)arg1;
- (void)registerOperatortextNextLine;
- (void)operatortextModeWithInfo:(id)arg1;
- (void)registerOperatortextMode;
- (void)operatortextScalingWithInfo:(id)arg1;
- (void)registerOperatortextScaling;
- (void)operatortextRiseWithInfo:(id)arg1;
- (void)registerOperatortextRise;
- (void)operatortextLeadingWithInfo:(id)arg1;
- (void)registerOperatortextLeading;
- (void)operatortextWordSpacingWithInfo:(id)arg1;
- (void)registerOperatortextWordSpacing;
- (void)operatortextCharacterSpacingWithInfo:(id)arg1;
- (void)registerOperatortextCharacterSpacing;
- (void)operatorsetFontWithInfo:(id)arg1;
- (void)registerOperatorsetFont;
- (void)operatorbeginTextWithInfo:(id)arg1;
- (void)registerOperatorbeginText;
- (void)operatorendImageWithInfo:(id)arg1;
- (void)registerOperatorendImage;
- (void)operatorbeginImageWithInfo:(id)arg1;
- (void)registerOperatorbeginImage;
- (void)operatordefineMarkedContentPointWithInfo:(id)arg1;
- (void)registerOperatordefineMarkedContentPoint;
- (void)operatorendMarkedContentWithInfo:(id)arg1;
- (void)registerOperatorendMarkedContent;
- (void)operatorbeginMarkedContentWithInfo:(id)arg1;
- (void)registerOperatorbeginMarkedContent;
- (void)operatorbeginMarkedContentWithPropertyWithInfo:(id)arg1;
- (void)registerOperatorbeginMarkedContentWithProperty;
- (void)operatorendCompatibilityWithInfo:(id)arg1;
- (void)registerOperatorendCompatibility;
- (void)operatorbeginCompatibilityWithInfo:(id)arg1;
- (void)registerOperatorbeginCompatibility;
- (void)operatorfillWithShadingPatternWithInfo:(id)arg1;
- (void)registerOperatorfillWithShadingPattern;
- (void)operatorfillEvenOddWithInfo:(id)arg1;
- (void)registerOperatorfillEvenOdd;
- (void)operatorfillObsoleteWithInfo:(id)arg1;
- (void)registerOperatorfillObsolete;
- (void)operatorfillWithInfo:(id)arg1;
- (void)registerOperatorfill;
- (void)operatorfillStrokeEvenOddWithInfo:(id)arg1;
- (void)registerOperatorfillStrokeEvenOdd;
- (void)operatorfillStrokeWithInfo:(id)arg1;
- (void)registerOperatorfillStroke;
- (void)operatorcloseFillStrokeEvenOddWithInfo:(id)arg1;
- (void)registerOperatorcloseFillStrokeEvenOdd;
- (void)operatorcloseFillStrokeWithInfo:(id)arg1;
- (void)registerOperatorcloseFillStroke;
- (void)operatorclipEvenOddWithInfo:(id)arg1;
- (void)registerOperatorclipEvenOdd;
- (void)operatorclipWithInfo:(id)arg1;
- (void)registerOperatorclip;
- (void)operatorsetFlatnessToleranceWithInfo:(id)arg1;
- (void)registerOperatorsetFlatnessTolerance;
- (void)operatorsetFillCMYKWithInfo:(id)arg1;
- (void)registerOperatorsetFillCMYK;
- (void)operatorsetStrokeCMYKWithInfo:(id)arg1;
- (void)registerOperatorsetStrokeCMYK;
- (void)operatorsetFillRGBWithInfo:(id)arg1;
- (void)registerOperatorsetFillRGB;
- (void)operatorsetStrokeRGBWithInfo:(id)arg1;
- (void)registerOperatorsetStrokeRGB;
- (void)operatorsetFillColourNameWithInfo:(id)arg1;
- (void)registerOperatorsetFillColourName;
- (void)operatorsetStrokeColourNameWithInfo:(id)arg1;
- (void)registerOperatorsetStrokeColourName;
- (void)operatorsetFillColourWithInfo:(id)arg1;
- (void)registerOperatorsetFillColour;
- (void)operatorsetStrokeColourWithInfo:(id)arg1;
- (void)registerOperatorsetStrokeColour;
- (void)operatorsetStrokeGreyWithInfo:(id)arg1;
- (void)registerOperatorsetStrokeGrey;
- (void)operatorsetFillGreyWithInfo:(id)arg1;
- (void)registerOperatorsetFillGrey;
- (void)operatorsetColourRenderingIntentWithInfo:(id)arg1;
- (void)registerOperatorsetColourRenderingIntent;
- (void)operatorsetFillColourSpaceWithInfo:(id)arg1;
- (void)registerOperatorsetFillColourSpace;
- (void)operatorsetStrokeColourSpaceWithInfo:(id)arg1;
- (void)registerOperatorsetStrokeColourSpace;
- (void)operatorstrokePathWithInfo:(id)arg1;
- (void)registerOperatorstrokePath;
- (void)operatorcloseAndStrokePathWithInfo:(id)arg1;
- (void)registerOperatorcloseAndStrokePath;
- (void)operatorsetMitreLimitWithInfo:(id)arg1;
- (void)registerOperatorsetMitreLimit;
- (void)operatorsetLineDashWithInfo:(id)arg1;
- (void)registerOperatorsetLineDash;
- (void)operatorsetLineCapWithInfo:(id)arg1;
- (void)registerOperatorsetLineCap;
- (void)operatorsetLineJoinWithInfo:(id)arg1;
- (void)registerOperatorsetLineJoin;
- (void)operatorsetLineWidthWithInfo:(id)arg1;
- (void)registerOperatorsetLineWidth;
- (void)operatorrestoreGraphicStateWithInfo:(id)arg1;
- (void)registerOperatorrestoreGraphicState;
- (void)operatorsaveGraphicStateWithInfo:(id)arg1;
- (void)registerOperatorsaveGraphicState;
- (void)operatorsetGraphicStateWithInfo:(id)arg1;
- (void)registerOperatorsetGraphicState;
- (void)operatorconcatMatrixWithInfo:(id)arg1;
- (void)registerOperatorconcatMatrix;
- (void)operatorprocessXObjectWithInfo:(id)arg1;
- (void)registerOperatorprocessXObject;
- (void)operatordefineMarkedPointWithInfo:(id)arg1;
- (void)registerOperatordefineMarkedPoint;
- (void)operatorappendRectangleWithInfo:(id)arg1;
- (void)registerOperatorappendRectangle;
- (void)operatorendPathWithInfo:(id)arg1;
- (void)registerOperatorendPath;
- (void)operatorclosePathWithInfo:(id)arg1;
- (void)registerOperatorclosePath;
- (void)operatorcurveToFinalPointReplicatedWithInfo:(id)arg1;
- (void)registerOperatorcurveToFinalPointReplicated;
- (void)operatorcurveToInitialPointReplicatedWithInfo:(id)arg1;
- (void)registerOperatorcurveToInitialPointReplicated;
- (void)operatorcurveToWithInfo:(id)arg1;
- (void)registerOperatorcurveTo;
- (void)operatorlineToWithInfo:(id)arg1;
- (void)registerOperatorlineTo;
- (void)operatormoveToWithInfo:(id)arg1;
- (void)registerOperatormoveTo;
- (void)glyphBounds;
- (void)declareGlyph;
- (void)endText;
- (void)offset:(double)arg1;
- (void)appendString:(id)arg1;
- (void)appendText:(id)arg1;
- (void)nextLineWithOffset:(struct CGPoint)arg1;
- (void)setTextMatrix:(id)arg1;
- (void)endImage;
- (void)imageData;
- (void)beginImage;
- (void)endMarkedContent;
- (void)beginMarkedContent;
- (void)beginMarkedContentWithProperty;
- (void)endCompatibility;
- (void)beginCompatibility;
- (void)fillWithShadingPattern:(id)arg1;
- (void)fillWithWinding:(unsigned long long)arg1;
- (void)strokeWithWinding:(unsigned long long)arg1;
- (void)clipWithWinding:(unsigned long long)arg1;
- (void)setMitreLimit:(double)arg1;
- (void)concatMatrix:(id)arg1;
- (void)restoreGraphicState;
- (void)saveGraphicState;
- (void)processImage:(id)arg1 info:(id)arg2;
- (void)processForm:(id)arg1;
- (void)processXObject:(id)arg1;
- (void)defineMarkedPoint;
- (void)endPath;
- (void)closePath;
- (void)setTextMode:(unsigned long long)arg1;
- (void)setTextScale:(double)arg1;
- (void)setTextRise:(double)arg1;
- (void)setTextLeading:(double)arg1;
- (void)setTextWordSpacing:(double)arg1;
- (void)setTextCharacterSpacing:(double)arg1;
- (void)setFontName:(id)arg1 size:(double)arg2;
- (void)setFontName:(id)arg1 size:(double)arg2 info:(id)arg3;
- (id)fontResourceNamed:(id)arg1;
- (void)beginText;
- (void)setOverprintMode:(long long)arg1;
- (void)setStrokeAlphaConstant:(double)arg1;
- (void)setFillAlphaConstant:(double)arg1;
- (void)setStrokePattern:(id)arg1;
- (void)setFillPattern:(id)arg1;
- (void)setStrokeColour:(id)arg1;
- (void)setFillColour:(id)arg1;
- (void)setColourRenderingIntent:(int)arg1;
- (void)setFillColourSpace:(id)arg1 mapping:(id)arg2;
- (void)setStrokeColourSpace:(id)arg1 mapping:(id)arg2;
- (void)setLineDash:(id)arg1 phase:(long long)arg2;
- (void)setLineCap:(unsigned long long)arg1;
- (void)setLineJoin:(unsigned long long)arg1;
- (void)setLineWidth:(double)arg1;
- (void)appendRectangle:(struct CGRect)arg1;
- (void)curveTo:(struct CGPoint)arg1 control1:(struct CGPoint)arg2 control2:(struct CGPoint)arg3;
- (void)lineTo:(struct CGPoint)arg1;
- (void)moveTo:(struct CGPoint)arg1;
- (int)currentRenderingIntent;
- (id)currentStrokeColorSpaceMapping;
- (id)currentStrokeColorSpace;
- (id)currentFillColorSpaceMapping;
- (id)currentFillColorSpace;
- (double)currentLeading;
- (struct CGPoint)currentPoint;
- (id)currentFont;
- (id)tryToPopObject;
- (id)popObject;
- (id)popArray;
- (id)popName;
- (id)popString;
- (id)popNumber;
- (BOOL)popBool;
- (long long)popInteger;
- (double)popDouble;
- (id)popPattern;
- (id)popColorForColorSpace:(id)arg1 mapping:(id)arg2;
- (id)popCMYKColor;
- (id)popRGBColor;
- (id)popTransform;
- (struct CGPoint)popPoint;
- (struct CGImage *)newImageFromStream:(id)arg1 details:(id *)arg2;
- (void)interpretObjectStream:(id)arg1;
- (void)interpretImageStream:(id)arg1;
- (id)data:(id)arg1 filteredWith:(id)arg2;
- (id)inflate:(id)arg1;
- (int)renderingIntentNamed:(id)arg1;
- (id)colorSpaceWithParameters:(id)arg1 mapping:(id *)arg2;
- (id)colorSpaceWithInfo:(id)arg1 mapping:(id *)arg2;
- (id)colorSpaceNamed:(id)arg1 mapping:(id *)arg2;
- (id)defaultColorSpaceNamed:(id)arg1;
- (id)resourceNamed:(id)arg1 ofKind:(id)arg2;
- (void)scanStream:(struct CGPDFContentStream *)arg1 dictionary:(id)arg2;
- (void)scanPage:(struct CGPDFPage *)arg1 parser:(id)arg2;
- (id)addOperator:(CDUnknownFunctionPointerType)arg1 name:(id)arg2 description:(id)arg3;
- (void)registerAllOperators;
- (void)logUnusedParametersWithInfo:(id)arg1;
- (void)dealloc;
- (id)init;

@end
