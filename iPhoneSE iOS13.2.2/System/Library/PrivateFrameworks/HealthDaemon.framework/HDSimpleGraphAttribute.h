/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:50 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDSimpleGraphObject.h>

@class NSString, HDSimpleGraphNode;

@interface HDSimpleGraphAttribute : HDSimpleGraphObject {

	NSString* _key;
	NSString* _value;
	NSString* _valueType;
	long long _nodeID;
	HDSimpleGraphNode* _node;

}

@property (nonatomic,copy) NSString * key;                                 //@synthesize key=_key - In the implementation block
@property (nonatomic,copy) NSString * value;                               //@synthesize value=_value - In the implementation block
@property (nonatomic,copy) NSString * valueType;                           //@synthesize valueType=_valueType - In the implementation block
@property (assign,nonatomic) long long nodeID;                             //@synthesize nodeID=_nodeID - In the implementation block
@property (assign,nonatomic,__weak) HDSimpleGraphNode * node;              //@synthesize node=_node - In the implementation block
-(id)init;
-(id)description;
-(NSString *)key;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(HDSimpleGraphNode *)node;
-(NSString *)valueType;
-(void)setNode:(HDSimpleGraphNode *)arg1 ;
-(void)setValueType:(NSString *)arg1 ;
-(long long)nodeID;
-(id)initWithDatabase:(id)arg1 rowID:(long long)arg2 key:(id)arg3 value:(id)arg4 valueType:(id)arg5 nodeID:(long long)arg6 node:(id)arg7 ;
-(void)setNodeID:(long long)arg1 ;
@end
