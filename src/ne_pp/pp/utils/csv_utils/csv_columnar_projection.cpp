#include "../../../../../include/ne_pp/pp/utils/csv_utils/csv_columnar_projection.hpp"

namespace ne_pp::pp {
CSVColumnarProjection::CSVColumnarProjection(std::unique_ptr<CSVDataFile> dataFile, const std::vector<size_t>& columnIndices)
    : dataFile(std::move(dataFile)), columnIndices(columnIndices) {}
}