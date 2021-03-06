//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailFoundation/EFObjectPropertyMapper-Protocol.h>

@class EFSQLColumnSchema, EFSQLTableSchema, NSArray, NSDictionary, NSString;
@protocol EFSQLExpressable;

@interface EFSQLObjectPropertyMapper : NSObject <EFObjectPropertyMapper>
{
    _Bool _isPlaceholder;
    NSDictionary *_children;
    EFSQLTableSchema *_table;
    EFSQLColumnSchema *_sourceColumn;
    id <EFSQLExpressable> _condition;
    NSArray *_additionalColumns;
    id <EFSQLExpressable> _bitExpression;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <EFSQLExpressable> bitExpression; // @synthesize bitExpression=_bitExpression;
@property(nonatomic) _Bool isPlaceholder; // @synthesize isPlaceholder=_isPlaceholder;
@property(readonly, nonatomic) NSArray *additionalColumns; // @synthesize additionalColumns=_additionalColumns;
@property(readonly, nonatomic) id <EFSQLExpressable> condition; // @synthesize condition=_condition;
@property(readonly, nonatomic) EFSQLColumnSchema *sourceColumn; // @synthesize sourceColumn=_sourceColumn;
@property(readonly, nonatomic) EFSQLTableSchema *table; // @synthesize table=_table;
@property(copy, nonatomic) NSDictionary *children; // @synthesize children=_children;
- (id)childForKey:(id)arg1;
- (id)initPlaceholderMapperWithChildren:(id)arg1;
- (id)initWithColumn:(id)arg1 condition:(id)arg2 additionalColumns:(id)arg3 bitExpression:(id)arg4;
- (id)initWithColumn:(id)arg1 condition:(id)arg2;
- (id)initWithColumn:(id)arg1 additionalColumns:(id)arg2;
- (id)initWithColumn:(id)arg1 bitExpression:(id)arg2;
- (id)initWithColumn:(id)arg1;
- (id)initWithChildren:(id)arg1 sourceColumn:(id)arg2 condition:(id)arg3 additionalColumns:(id)arg4;
- (id)initWithChildren:(id)arg1 sourceColumn:(id)arg2 condition:(id)arg3;
- (id)initWithChildren:(id)arg1 sourceColumn:(id)arg2 additionalColumns:(id)arg3;
- (id)initWithChildren:(id)arg1 sourceColumn:(id)arg2;
- (id)initWithChildren:(id)arg1 table:(id)arg2 condition:(id)arg3 additionalColumns:(id)arg4;
- (id)initWithChildren:(id)arg1 table:(id)arg2 condition:(id)arg3;
- (id)initWithChildren:(id)arg1 table:(id)arg2 additionalColumns:(id)arg3;
- (id)initWithChildren:(id)arg1 table:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

