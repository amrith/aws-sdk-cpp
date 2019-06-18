﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPI_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ResourceGroupsTaggingAPI
{
namespace Model
{
  class AWS_RESOURCEGROUPSTAGGINGAPI_API DescribeReportCreationResult
  {
  public:
    DescribeReportCreationResult();
    DescribeReportCreationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeReportCreationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Reports the status of the operation.</p> <p>The operation status can be one
     * of the following:</p> <ul> <li> <p> <code>RUNNING</code>: Report generation is
     * in progress.</p> </li> <li> <p> <code>SUCCEEDED</code>: Report generation is
     * complete. You can open the report from the Amazon S3 bucket you specified when
     * you ran <code>StartReportGeneration</code>.</p> </li> <li> <p>
     * <code>FAILED</code>: Report generation timed out or the Amazon S3 bucket is not
     * accessible. </p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>Reports the status of the operation.</p> <p>The operation status can be one
     * of the following:</p> <ul> <li> <p> <code>RUNNING</code>: Report generation is
     * in progress.</p> </li> <li> <p> <code>SUCCEEDED</code>: Report generation is
     * complete. You can open the report from the Amazon S3 bucket you specified when
     * you ran <code>StartReportGeneration</code>.</p> </li> <li> <p>
     * <code>FAILED</code>: Report generation timed out or the Amazon S3 bucket is not
     * accessible. </p> </li> </ul>
     */
    inline void SetStatus(const Aws::String& value) { m_status = value; }

    /**
     * <p>Reports the status of the operation.</p> <p>The operation status can be one
     * of the following:</p> <ul> <li> <p> <code>RUNNING</code>: Report generation is
     * in progress.</p> </li> <li> <p> <code>SUCCEEDED</code>: Report generation is
     * complete. You can open the report from the Amazon S3 bucket you specified when
     * you ran <code>StartReportGeneration</code>.</p> </li> <li> <p>
     * <code>FAILED</code>: Report generation timed out or the Amazon S3 bucket is not
     * accessible. </p> </li> </ul>
     */
    inline void SetStatus(Aws::String&& value) { m_status = std::move(value); }

    /**
     * <p>Reports the status of the operation.</p> <p>The operation status can be one
     * of the following:</p> <ul> <li> <p> <code>RUNNING</code>: Report generation is
     * in progress.</p> </li> <li> <p> <code>SUCCEEDED</code>: Report generation is
     * complete. You can open the report from the Amazon S3 bucket you specified when
     * you ran <code>StartReportGeneration</code>.</p> </li> <li> <p>
     * <code>FAILED</code>: Report generation timed out or the Amazon S3 bucket is not
     * accessible. </p> </li> </ul>
     */
    inline void SetStatus(const char* value) { m_status.assign(value); }

    /**
     * <p>Reports the status of the operation.</p> <p>The operation status can be one
     * of the following:</p> <ul> <li> <p> <code>RUNNING</code>: Report generation is
     * in progress.</p> </li> <li> <p> <code>SUCCEEDED</code>: Report generation is
     * complete. You can open the report from the Amazon S3 bucket you specified when
     * you ran <code>StartReportGeneration</code>.</p> </li> <li> <p>
     * <code>FAILED</code>: Report generation timed out or the Amazon S3 bucket is not
     * accessible. </p> </li> </ul>
     */
    inline DescribeReportCreationResult& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>Reports the status of the operation.</p> <p>The operation status can be one
     * of the following:</p> <ul> <li> <p> <code>RUNNING</code>: Report generation is
     * in progress.</p> </li> <li> <p> <code>SUCCEEDED</code>: Report generation is
     * complete. You can open the report from the Amazon S3 bucket you specified when
     * you ran <code>StartReportGeneration</code>.</p> </li> <li> <p>
     * <code>FAILED</code>: Report generation timed out or the Amazon S3 bucket is not
     * accessible. </p> </li> </ul>
     */
    inline DescribeReportCreationResult& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>Reports the status of the operation.</p> <p>The operation status can be one
     * of the following:</p> <ul> <li> <p> <code>RUNNING</code>: Report generation is
     * in progress.</p> </li> <li> <p> <code>SUCCEEDED</code>: Report generation is
     * complete. You can open the report from the Amazon S3 bucket you specified when
     * you ran <code>StartReportGeneration</code>.</p> </li> <li> <p>
     * <code>FAILED</code>: Report generation timed out or the Amazon S3 bucket is not
     * accessible. </p> </li> </ul>
     */
    inline DescribeReportCreationResult& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The path to the Amazon S3 bucket where the report is stored.</p>
     */
    inline const Aws::String& GetS3Location() const{ return m_s3Location; }

    /**
     * <p>The path to the Amazon S3 bucket where the report is stored.</p>
     */
    inline void SetS3Location(const Aws::String& value) { m_s3Location = value; }

    /**
     * <p>The path to the Amazon S3 bucket where the report is stored.</p>
     */
    inline void SetS3Location(Aws::String&& value) { m_s3Location = std::move(value); }

    /**
     * <p>The path to the Amazon S3 bucket where the report is stored.</p>
     */
    inline void SetS3Location(const char* value) { m_s3Location.assign(value); }

    /**
     * <p>The path to the Amazon S3 bucket where the report is stored.</p>
     */
    inline DescribeReportCreationResult& WithS3Location(const Aws::String& value) { SetS3Location(value); return *this;}

    /**
     * <p>The path to the Amazon S3 bucket where the report is stored.</p>
     */
    inline DescribeReportCreationResult& WithS3Location(Aws::String&& value) { SetS3Location(std::move(value)); return *this;}

    /**
     * <p>The path to the Amazon S3 bucket where the report is stored.</p>
     */
    inline DescribeReportCreationResult& WithS3Location(const char* value) { SetS3Location(value); return *this;}


    /**
     * <p>Details of the common errors that all operations return.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>Details of the common errors that all operations return.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessage = value; }

    /**
     * <p>Details of the common errors that all operations return.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessage = std::move(value); }

    /**
     * <p>Details of the common errors that all operations return.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessage.assign(value); }

    /**
     * <p>Details of the common errors that all operations return.</p>
     */
    inline DescribeReportCreationResult& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>Details of the common errors that all operations return.</p>
     */
    inline DescribeReportCreationResult& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>Details of the common errors that all operations return.</p>
     */
    inline DescribeReportCreationResult& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}

  private:

    Aws::String m_status;

    Aws::String m_s3Location;

    Aws::String m_errorMessage;
  };

} // namespace Model
} // namespace ResourceGroupsTaggingAPI
} // namespace Aws
