/*******************************************************************************
**NOTE** This code was generated by a tool and will occasionally be
overwritten. We welcome comments and issues regarding this code; they will be
addressed in the generation tool. If you wish to submit pull requests, please
do so for the templates in that tool.

This code was generated by Vipr (https://github.com/microsoft/vipr) using
the T4TemplateWriter (https://github.com/msopentech/vipr-t4templatewriter).

Copyright (c) Microsoft Corporation. All Rights Reserved.
Licensed under the Apache License 2.0; see LICENSE in the source repository
root for authoritative license information.﻿
******************************************************************************/


#ifndef MSGRAPHSERVICEGROUPCOLLECTIONFETCHER_H
#define MSGRAPHSERVICEGROUPCOLLECTIONFETCHER_H

@class MSGraphServiceGroupFetcher;

#import "core/MSOrcCollectionFetcher.h"
#import "api/api.h"
#import "core/core.h"
#import "MSGraphServiceModels.h"

/** MSGraphServiceGroupCollectionFetcher
 *
 */
@interface MSGraphServiceGroupCollectionFetcher : MSOrcCollectionFetcher

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSOrcExecutable>)parent;

- (void)readWithCallback:(void (^)(NSArray *, MSOrcError *))callback;

- (MSGraphServiceGroupFetcher *)getById: (id) identifier;
- (void)add:(MSGraphServiceGroup *)entity callback:(void (^)(MSGraphServiceGroup *, MSOrcError *))callback;

- (MSGraphServiceGroupCollectionFetcher *)select:(NSString *)params;
- (MSGraphServiceGroupCollectionFetcher *)filter:(NSString *)params;
- (MSGraphServiceGroupCollectionFetcher *)search:(NSString *)params;
- (MSGraphServiceGroupCollectionFetcher *)top:(int)value;
- (MSGraphServiceGroupCollectionFetcher *)skip:(int)value;
- (MSGraphServiceGroupCollectionFetcher *)expand:(NSString *)value;
- (MSGraphServiceGroupCollectionFetcher *)orderBy:(NSString *)params;
- (MSGraphServiceGroupCollectionFetcher *)addCustomParametersWithName:(NSString *)name value:(id)value;
- (MSGraphServiceGroupCollectionFetcher *)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;

@end

#endif
